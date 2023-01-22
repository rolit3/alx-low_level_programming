#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - sums all its parameters
* @n: first parameter
* Return: 0 if n is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{

va_list li;
int sum = 0;
unsigned int i;

va_start(li, n);
if (n != 0)
{
for (i = 0; i < n; i++)
sum += va_arg(li, int);
}

va_end(li);
return (sum);

}
/**
 * sum_them_all - Ce programme calcule la somme de n nombres entiers.
 * Elle prend deux arguments: n: un entier non signé qui indique le nombre
 * d'arguments suivants qui seront utilisés pour calculer la somme.
 * ... : une liste variable d'arguments qui sont les nombres entiers à
 * additionner.  La fonction utilise une liste variable d'arguments (va_list)
 * pour accéder aux arguments de la liste variable. Il utilise les macros
 * va_start, va_arg et va_end pour parcourir les arguments de la liste variable
 * La macro va_start est utilisée pour initialiser l'objet de type va_list
 * (appelé li) pour l'utilisation avec les autres macros va_arg, va_end, et
 * va_copy.  Une boucle for est utilisée pour parcourir les n arguments de la
 * liste variable. Pour chaque itération, la macro va_arg est utilisée pour
 * récupérer l'argument suivant de la liste variable. Ces arguments sont de
 * type int et sont ajoutés à la variable sum qui contient la somme des
 * nombres. Enfin, la macro va_end est utilisée pour nettoyer l'objet
 * va_list après avoir parcouru tous les arguments de la liste variable.
 * La fonction retourne ensuite a somme des nombres. Notez que si n vaut
 * 0, la somme retournée est 0.
 */
