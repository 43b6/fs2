
inherit ROOM;
#include <ansi.h>
void create () {
set ("short",HIB"������"NOR);
        set ("long","��������������ң�ǽ�ϵ���һֻ��������������צ����ɫ������
�����������������һ�����ţ������л������ƣ�����������Ϣ��
���㲻������һ����
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "north" :  __DIR__"room37",
      ]));
        set("objects",([ /* sizeof() == 1 */
        __DIR__"obj/fire_book" : 1,
 //       __DIR__"obj/sspill" : 2,
      ]));

        setup();
}
