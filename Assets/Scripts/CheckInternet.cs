using System.Collections;
using UnityEngine;
using UnityEngine.PlayerLoop;
using UnityEngine.UI;
public class CheckInternet : MonoBehaviour
{
    [SerializeField] Image bar;
    [SerializeField] Text percent;

    bool barOne = true;
    float progressLoad;

    // Start is called before the first frame update
    void Awake()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            Debug.Log("NoInternet");
            GameObject.Find("Main Camera").GetComponent<DB>().haveInternet = false;
            Time.timeScale = 0f;
        }
        else
        {
            Debug.Log("All good");
            GameObject.Find("Main Camera").GetComponent<DB>().haveInternet = true;


        }
    }
    private void Update()
    {
        if (GameObject.Find("Main Camera").GetComponent<DB>().haveInternet == true && barOne)
        {
            StartCoroutine(startProgressBar());

            barOne = false;
        }
    }

    IEnumerator startProgressBar()
    {
        yield return new WaitForSeconds(1f);

        progressLoad = 50f;
        bar.fillAmount = progressLoad / 100f;
        percent.text = Mathf.RoundToInt(progressLoad).ToString() + "%";

        yield return new WaitForSeconds(1f);

        progressLoad = 100f;
        bar.fillAmount = progressLoad / 100f;
        percent.text = Mathf.RoundToInt(progressLoad).ToString() + "%";

        yield return new WaitForSeconds(0.5f);

        Destroy(gameObject);
    }

}
