inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int main(object me,string arg)
{
object target;
string st1;
int lolo;
lolo=me->query("poison");
message_vision(
"$N��������"+lolo+"��Ķ��ء�\n",me);
return 1;
}

int help(object me)
{
   write(@HELP

ָ���ʽ��cmd query

˵�������ָ���������֪�����ں��еĶ�������

HELP
   );
   return 1;
}

