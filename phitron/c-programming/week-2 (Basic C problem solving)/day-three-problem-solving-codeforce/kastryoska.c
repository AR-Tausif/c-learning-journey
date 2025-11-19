#include <stdio.h>

int main()
{
    long long int eye, mouth, body, total;

    scanf("%lld %lld %lld", &eye, &mouth, &body);
    // get the min value of these integers

    long long int min;
    if (eye <= mouth)
    {
        if (eye <= body)
        {
            min = eye;
        }
        else
        {
            min = body;
        }
    }
    else
    {
        if (mouth <= body)
        {
            min = mouth;
        }
        else
        {
            min = body;
        }
    }

    if (min > 0)
    {
        total = min;
        eye = eye - min;
        mouth = mouth - min;
        body = body - min;
        if (eye >= 2 && body >= 1)
        {

            if (eye >= body * 2)
            {
                total = total + body;
                body = body - body;
                eye = eye - (body * 2);
            }
            else if (body > 0)
            {

                long long int halfEye = eye / 2;
                total = total + halfEye;
                eye = eye - (halfEye * 2);
                body = body - (halfEye * 2);
            }
        }
    }
    else
    {
        total = 0;
    }

    printf("%lld", total);
    return 0;
}