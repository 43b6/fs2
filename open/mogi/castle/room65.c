// room7.c by roger
inherit ROOM;
#include <ansi.h>
void create () {
set ("short", HIR"����ħ��"NOR);
        set ("long","�������һƬͨ�죬ǽ�����ź�ɫ�Ļ��棬���汼�ڣ����������������������ȡ�
�����������˵ģ�����(search)һ��������ɶ�ջ�
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ 
        "north" :  __DIR__"room64",  
            
            
      ]));

        setup();
}
void init()
{
        add_action("do_search", "search");
        add_action("do_jump","jump");
}

int do_jump(string str){

   object me;
   me = this_player();

        if(!str || str != "fire"){
                return notify_fail("�����������\n");
                           return 1;
                                 }
            me->add("sen",-100);
            tell_object(me,"�������������ɫ�Ļ��棬��ʱ���ǻ��ԣ����Ժ����б�����ĳһ�ط�.....��\n");
            me->move(__DIR__"entrance");
            return 1;

            
}
int do_search()
{
object me;
 me = this_player();
 tell_object(me,"���Ұ��ң�������ǽ�Ϸ���һ�ź�ɫ�Ļ���(fire)���ֹ���ģ���(jump)��ȥ��֪�ᵽ���\n");
 return 1;
}
