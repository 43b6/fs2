// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short", HIG"���صش�"NOR);
        set ("long","�����ƺ����ǰ�Х����˵�����صش�����˵�ɴ˿����ӵ��ű���ͷ��
ֻ�����ﷺ�ŵ����Ĳ��̣�������֣��㲻�������Ƿ����ӵ���
ͷ���Ͼ��������ħʵ��̫������...��ͷһת����������Ѱ(search)
һ����˵��...
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ 
        "east" :  __DIR__"room31",  
            
            
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

        if(!str || str != "hole"){
                return notify_fail("�����������\n");
                           return 1;
                                 }
            me->add("sen",-100);
            tell_object(me,"��������������ɫ�����У���ʱ���ǻ��ԣ����Ժ����б�����ĳһ�ط�.....��\n");
            me->move(__DIR__"entrance");
            return 1;

            
}
int do_search()
{
object me;
 me = this_player();
 tell_object(me,"���Ұ��ң�������ǽ�Ϸ���һ����ɫ������(hole)���ֹ���ģ���(jump)��ȥ��֪�ᵽ���\n");
 return 1;
}
