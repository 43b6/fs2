// unhold.c
// By LinaSi-Inverse-( 1999 )
#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
   object ob, obj;
   string Narrows, Nbow;

   if(!arg) return notify_fail("[�÷�]: unhold <����> with <��>\n");
   if(sscanf(arg, "%s with %s",Narrows, Nbow)!=2)
      return notify_fail("[�÷�]: unhold <����> with <��>\n");

   if( !ob = present(Nbow, me) )
      return notify_fail("������û����ѹ� ...��\n");

   if( me->query("family/family_name") != "������")
   return notify_fail("�㲻�������ɵ��ˡ�\n");

   if( ob->query("skill_type") != "archery" )
      return notify_fail("�Ⲣ���ǹ�����\n");
   if( ob->query("arrow/id") == "none" )
      return notify_fail("����ûװ�κζ���������\n");
   if( ob->query("arrow/id") != Narrows )
      return notify_fail("���ϲ�û�����ֶ�����\n");
       seteuid(getuid(me));
       obj = new(ob->query("arrow/path"));
       obj->set_amount(ob->query("arrow/amount"));
       obj->move(me);

       ob->set("arrow/id","none");
       ob->set("arrow/amount",0);
       ob->set("arrow/name","�յ�");
       ob->set("weapon_prop/damage",ob->query("bow/attack"));

       if( me->query_temp("weapon") == ob )
       me->set_temp("apply/damage",ob->query("bow/attack"));

       ob->delete("bow/attack");
       message_vision("$NС�ĵ�ж��"+obj->query("name")+"���ս������\n",me);
       return 1;
}
int help(object me)
{
  write(@HELP
ָ���ʽ��unhold <arrows> with <bow>

���ָ�holdup, bcheck
HELP
    );
    return 1;
}

