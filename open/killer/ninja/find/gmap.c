#include <ansi.h>
inherit ITEM;
void create()
{
        set_name("��������", ({ "compass" }) );
        set("long","����ָ������̣����滹��ʾ�š����롯����check)�����ɣ�\n");
        set_weight(10);
        set("unit", "��");
        set("value", 0);
        set("no_sell", 1);
        set("no_give", 1);
        set("no_auc", 1);
        set("no_drop", 1);
        setup();
}

void init ()
{
 add_action ("do_watch","check");
}

int do_watch(string arg)
{
   int sk;
   object ob,me,target;
   string str;
   me = this_player();
   ob = this_object();

   if( arg != "����" )
       return notify_fail("����ʲôѽ����\n");
   if (me->query("class") != "killer")
   {
      tell_object(me,"���ף�ȥ���ɣ����㷢���Լ��е㷢�裬Ȼ��Ͳ��������ˣ�\n"); 
       me->move("/open/death/start");
      return 1;
   }

   if( me->query_temp("firstpart") != 10)
   {//�����Ϻܲ�������Ϊ�ͽ�ȥ���趨����ͬһ��
     tell_object(me,"�㿴��һ�ۣ���Ȼ�����Լ��е㷢�裬Ȼ��Ͳ��������ˣ�\n"); 
     me->move("/open/killer/room/masterm.c");
     me->delete_temp("firstpart");
     destruct(this_object());
     return 1;
   }
   tell_object(me,"          ��         \n"); 
   tell_object(me,"          |          \n"); 
   tell_object(me,"      ----��-----    \n"); 
   tell_object(me,"          |          \n"); 
   tell_object(me,"          ��         \n"); 
   tell_object(me,"½2,��3����1����4����2����3 \n"); 
return 1;
}
