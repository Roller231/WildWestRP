using UnityEngine;

public class TouchCameraControl : MonoBehaviour
{
    private Vector2 touchStart;
    public float zoomOutMin = 1;
    public float zoomOutMax = 8;
    public float panSpeed = 0.1f;

    public float cameraMinX = -5;
    public float cameraMaxX = 5;
    public float cameraMinY = -5;
    public float cameraMaxY = 5;
    public float cameraMinZ = -5; 
    public float cameraMaxZ = 5;

    void Update()
    {
        if (Input.touchCount == 2 && !UtilScripts.IsPointerOverUIObject())
        {
            Touch touchZero = Input.GetTouch(0);
            Touch touchOne = Input.GetTouch(1);

            Vector2 touchZeroPreviousPos = touchZero.position - touchZero.deltaPosition;
            Vector2 touchOnePreviousPos = touchOne.position - touchOne.deltaPosition;

            float prevMagnitude = (touchZeroPreviousPos - touchOnePreviousPos).magnitude;
            float currentMagnitude = (touchZero.position - touchOne.position).magnitude;

            float difference = currentMagnitude - prevMagnitude;

            Zoom(difference * 0.01f);
        }
        else if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Moved && !UtilScripts.IsPointerOverUIObject())
        {
            Vector3 touchDeltaPosition = Input.GetTouch(0).deltaPosition;
            PanCamera(-touchDeltaPosition);
        }
        else if (Input.GetMouseButton(0) && !UtilScripts.IsPointerOverUIObject())
        {
            Vector3 touchDeltaPosition = new Vector3(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y"), 0);
            PanCamera(-touchDeltaPosition);
        }

        ClampZoom();
        ClampCameraPosition();
    }

    void Zoom(float increment)
    {
        Camera.main.orthographicSize = Mathf.Clamp(Camera.main.orthographicSize - increment, zoomOutMin, zoomOutMax);
    }

    void ClampZoom()
    {
        Camera.main.orthographicSize = Mathf.Clamp(Camera.main.orthographicSize, zoomOutMin, zoomOutMax);
    }

    void PanCamera(Vector3 delta)
    {
        transform.Translate(delta * panSpeed);
    }

    void ClampCameraPosition()
    {
        float cameraHeight = Camera.main.orthographicSize * 2;
        float cameraWidth = cameraHeight * Camera.main.aspect;

        float minX = cameraMinX + cameraWidth / 2;
        float maxX = cameraMaxX - cameraWidth / 2;
        float minY = cameraMinY + cameraHeight / 2;
        float maxY = cameraMaxY - cameraHeight / 2;
        float minZ = cameraMinZ + cameraHeight / 2; // Нижнее значение Z
        float maxZ = cameraMaxZ - cameraHeight / 2; // Верхнее значение Z


        transform.position = new Vector3(
            Mathf.Clamp(transform.position.x, minX, maxX),
            Mathf.Clamp(transform.position.y, minY, maxY),
             Mathf.Clamp(transform.position.z, minZ, maxZ)
        );
    }
}
