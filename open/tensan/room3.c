inherit ROOM;
#include <ansi.h>
void create () {
        set ("short","��ɽ����");
        set ("long",@LONG
����ǰ����һ����ɽ�������޵����������ȥ������ν���ɸ�¥ƽ��
����Ȼ�㲻֪������·�ж೤��������̤����ĵ�һ���϶�����Զ����
��ɽ���ġ�
LONG);
           
        set("exits", ([ /* sizeof() == 1 */
        "northup" : __DIR__"room4",
        "south" :  __DIR__"room2",       
        ]));

       
        setup();
}
