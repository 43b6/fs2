inherit ROOM;
#include <ansi.h>
void create () {
        set ("short","��ɽɽ��");
        set ("long",@LONG
��̧ͷһ������ɽɽ��ֱ����������ɽ����ʼһƬ��ѩ���������졣
����һ���ƺ���Զ��������ΰ�Ľ�������ĺ����Ĳ��ϵĴߴ���ӿ�Ų�
��ǰ��ȥ
LONG);
           
        set("exits", ([ /* sizeof() == 1 */
        "north" : __DIR__"room2",
        "southeast" : "/open/main/room/f3",       
        ]));

       
        setup();
}
