#include <ansi.h>
#include <command.h>

inherit F_DBASE;
inherit F_CLEAN_UP;
void create() { seteuid(getuid());}
int main(object me,string arg)
{
        string name1,name2;
        object source,target;

        if(wiz_level(me) <=6) return 0;

        if(!arg) return notify_fail("cp_user ��Ҫ�����Ƶ�id ��id.\n");

        if(sscanf(arg,"%s %s",name1,name2)!=2)
          return notify_fail("cp_user ��Ҫ�����Ƶ�id ��id.\n");

        source=find_player(name1);
        if(!source)
          source= FINGER_D->acquire_login_ob(name1);
        if(!source)
          return notify_fail("û�� "+name1+" ������!!\n");

        target=find_player(name2);
        if(!target)
          target= FINGER_D->acquire_login_ob(name2);
        if(!target)
          return notify_fail("û�� "+name2+" ������!!\n");

        source->set("id",name2);
        source->set("bss/cp_user",1);
        source->save();
        if(!find_player(name1))
        destruct(source);
        if(find_player(name2))
          tell_object(target,sprintf("user ת�����, �����Ҫ�����������%s\n",name1));
        destruct(target);
        write("�������!!\n");
        return 1;
}
int help(object me)
{
        if(!wizardp(me)) return 0;
        write(@HELP
ָ���ʽ: cp_user �����Ƶ�id ��id

���Ը�����ҵ�����һ��char��
��ע��,�����Ƶ� id and �µ�id�������Ѿ����������Ż���Ч
HELP
        );
        return 1;
}
