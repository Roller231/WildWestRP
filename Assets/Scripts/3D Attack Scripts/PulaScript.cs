using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PulaScript : MonoBehaviour
{

    Rigidbody body;
    [SerializeField] float moveSpeed;
    Transform target;

    [SerializeField] public int damage;

    // Start is called before the first frame update
    void Start()
    {
        body = GetComponent<Rigidbody>();

        target = GetComponentInParent<GunShoot>().target;
    }

    // Update is called once per frame
    void Update()
    {
        if (target != null)
        {
            Vector3 movement = (target.position - transform.position).normalized;

            body.velocity = movement * moveSpeed;
        }
        if (target == null)
        {
            Destroy(gameObject);
        }

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.name == "Enemy Model")
        {
            other.gameObject.GetComponentInParent<Enemy>().health -= damage;
            Debug.Log(other.gameObject.GetComponentInParent<Enemy>().health);

            Destroy(gameObject);

        }
    }
}
