
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","�ű���¥");
        set ("long","���ܳ��������˼�����Ϣ�����գ���ɭɭ�Ĺ������
һ��һ���ţ���ϸһ���ƺ����в��ٰ׹�ɢ���ڵ��ϣ�
����ʹ�����˼�Ƥ��񡣿���������һ��������ĳ��ȡ�
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east" :  __DIR__"room34",
            "west" :  __DIR__"room30",
          
      ]));

       

        setup();
}
