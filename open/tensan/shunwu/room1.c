inherit ROOM;
#include <ansi.h>
#include <room.msg>

void create () {
        set ("short","�������");
        set ("long",
        "��һ̤��������󼴷��ִ���Ǳ�Ѱ�������û��������ȫ��׼��\n"+
        "��������뿪\n"
        );
    
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 1 */
        "����" : __DIR__"room2",
        "����" : __DIR__"room2",      
        ]));
  

        setup();
}
