inherit ROOM;
#include <ansi.h>
void create () {
        set ("short","��ɽ����");
        set ("long",@LONG
����ǰ����һ����ɽ�������޵����������ȥ������ν���ɸ�¥ƽ��
����Ȼ�㲻֪������·�ж೤��������Ȼ�Ѿ�������ȥ�Ǿͱ��ͷ�ɡ�
LONG);
           
        set("exits", ([ /* sizeof() == 1 */
        "westup" : __DIR__"room5",
        "southdown" :  __DIR__"room3",       
        ]));

       
        setup();
}
