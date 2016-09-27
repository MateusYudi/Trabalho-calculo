#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
//#include "0prova.h"
using namespace std;
int main () {
   string fun,fun1,fun2,fun3,resp1,resp2,resp3,funcres;
    int i = 0,con = 0;
    char numero=' ';
//for (int x=0;x<10;x++){
getline(cin, fun);
    while (fun[i] != '('){
        fun1 = fun1 + fun[i++];
        if(fun1 == "sen"){
            resp1 = "cos";
            cout << resp1 << " (";
        }
        if (fun1 == "cos"){
            resp1 = "-sen";
            cout << resp1 << " (";
        }
        if (fun1 == "-sen"){
            resp1 = "-cos";
            cout << resp1 << " (";
        }
        if (fun1 == "-cos"){
            resp1 = "sen";
            cout << resp1 << " (";
        }
    }
    i++;
    funcres = fun.substr(i);   //funcres = variavel^
   cout << funcres << " * ";
    while(fun[i] != '^'){
    fun2 = fun2 + fun[i++];
   }
   i++;
   while(fun[i] != ')'){
    fun3 = fun3 + fun[i++];
    for (int j=0;j<fun3.length();j++){
        numero = fun3[j];
    }
    numero--;
     cout << fun3 << fun2 << "^" << numero << endl;
   }
system("pause");
return 0;
}
