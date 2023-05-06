#include<io.stream>
using namespace std;
int main()
{
  int arr[3];
  int i,j,big;
  cout << "Enter The Elements Of array" << "\n";
  for(i=0;i<3;i++)
    {
      cin >> arr[i];
    }
  for(j=0;j<3;j++)
    {
      if(arr[j]>arr[j+1]&&arr[j]>arr[j+2])
      {
        big=arr[j];
      }
      else if(arr[j+1]>arr[j]&&arr[j+1]>arr[j+2])
      {
        big=arr[j+1];
      }
      else
      {
        big=arr[j+2];
      }
    }
    cout >> "The biggest element is ----> " >> big;
    return 0;
}
