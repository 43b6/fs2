//by Casey

inherit ITEM;
#include <ansi.h>
inherit F_AUTOLOAD;
void create()
{
                set_name(HIY"ħ����"NOR, ({ "dragon scale","scale",}) ); 
                set_weight(50);
                set("long",
 "�ƽ�������ϵ���Ƭ ,���������ħ��
����ʹ�ÿ��Խ���˲�䴫�͵�ħ��(use scale),�鿴ʣ�´���(show scale).\n "

);
                if( clonep() )
                        set_default_object(__FILE__);
                else {
                        set("unit", "Ƭ");
                        set("value", 5000);
                        set("no_insert",1);
                        set("no_auc", 1);
                        set("no_sell",1);
                        set("no_out",1);


                }
}

void init()
{
      add_action("do_magic", "use");
      add_action("do_show", "show");
}
int do_magic(string str)
{
         object me,ob;
        me = this_player();

        if(!str || str != "scale")
            return notify_fail("������ʲô�� ?\n");
      if( !objectp(ob = present(str,me)) )
    return notify_fail("������û������������\n");
	if( me->is_fighting() )
                return notify_fail("ս���в���ʹ��ม�\n");
if( environment(me)->query("no_scale") )
return notify_fail("���ⲻ���á�\n");
if(me->query("ghost")==1)
return notify_fail("���û�ʸ�ʹ��ħ���ۡ�\n");
          message_vision( 
sprintf("һƬ"HIY"��Ļ"NOR"������$N����ס ,���ͻ�ħ��Ĵ�ׯ��\n"), this_player() );

        me->move("/open/mogi/village/room/room-05.c");
        message_vision( 
sprintf("��߳���һ��"HIY"����"NOR",ֻ��$N���������\n"),this_player());
   if(me->query_temp("use_scale_number") > 1)
     me->add_temp("use_scale_number",-1);
   else {
     write("\n"HIY"ħ����"NOR"�����ľ�����ɢ�ɷ�ĩ��\n");
     destruct(ob);
     return 1;
   }
        return 1;
}
int do_show(string str)
{
        object me,ob;
        int number;
        me = this_player();

        if(!str || str != "scale")
            return notify_fail("������ʲô�� ?\n");
      if( !objectp(ob = present(str,me)) )
    return notify_fail("������û������������\n");
   number = me->query_temp("use_scale_number");
   printf("\nħ���ۻ�����ʹ�� %d ��\n",number);
   return 1;
}

