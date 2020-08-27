#include iostream
#includevector
#includealgorithm
using namespace std;

int solution(vectorint A, vectorint B)
{
    int answer = 0;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greaterint());
    
    for (int i = 0; i  A.size(); i++)
    {
        answer += A[i]  B[i];
    }
    

    return answer;
}