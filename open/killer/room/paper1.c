#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("�Ͼɵ�ţƤ", ({ "papers" }) );
        set("long","���Ͼɵ�ţƤ��������ԣ�watch)�ɣ�\n");
        set_weight(10);
        set("unit", "��");
        set("value", 0);
        set("no_sell", 1);
        set("no_give", 1);
}

void init ()
{
 add_action ("do_watch","watch");
}

int do_watch(string arg)
{
   int sk;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();

   if( arg != "papers" )
       return notify_fail("���뿴ʲôѽ����\n");
   if( me->query_temp("mission3") != 2)
   {
     tell_object(me,"�㿴��һ�ۣ���Ȼ�����Լ��е㷢�裬Ȼ��Ͳ��������ˣ�\n"); 
     me->move("/open/killer/home/masterm.c");
     return 1;
   }
   tell_object(me,"����������ķ���������\n"); 
   tell_object(me,"��ɽ֮���ķ�����һ��\n"); 
   tell_object(me,"�������ϱ��ķ���������\n"); 
   tell_object(me,"��½�����ķ�����һ��\n"); 
   tell_object(me,"����̳�ھ��ǵķ���������\n"); 
   set_temp("mission3",3);
}