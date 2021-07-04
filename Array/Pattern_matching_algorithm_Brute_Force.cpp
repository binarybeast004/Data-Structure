                 // Pettern_Matching_algorithm_Brute_Force

{
l_main_string=length(s)
l_pattern_string=length(p)
max=(l_main_string- l_pattern_string +1)
for(i=1; i<=max; i++)
{
Flag=true
for(j=1;j<=l_pattern_string && flag==true; j++)
{
if(p[1]!=s[j+i-1])
{
flag=false
}
if(flag==true)
{
return i
}
}
return 0;
}
