#include <ansi.h>
inherit F_CLEAN_UP;
void create(){ seteuid(getuid());}
int main(object me,string arg)
{
    mapping emote;
    string name;

    if(!arg) return notify_fail("name_emote emote ��������\n");

    if(sscanf(arg,"%s %s",arg,name)!=2)
      return notify_fail("name_emote emote ��������\n");

    emote=EMOTE_D->query_emote(arg);
    if(!mapp(emote)) return notify_fail("û�����emote!!\n");

    emote["short"]=name;
    printf("���趨%s����������Ϊ(%s)\n",arg,name);
    EMOTE_D->set_emote(arg, emote);
    write("ok.\n");
    return 1;
}
int help(object me)
{
        write(@HELP
ָ���ʽ: name_emote emote��Ӣ���� emote��������

���԰�û����������emote����, Ҳ���԰��Ѿ�����������emote����
HELP
        );
        return 1;
}


