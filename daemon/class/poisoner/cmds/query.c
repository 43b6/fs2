inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int main(object me,string arg)
{
object target;
string st1;
int lolo;
lolo=me->query("poison");
message_vision(
"$N体内尚有"+lolo+"点的毒素。\n",me);
return 1;
}

int help(object me)
{
   write(@HELP

指令格式：cmd query

说明：这个指令可以让你知道体内含有的毒素量。

HELP
   );
   return 1;
}

