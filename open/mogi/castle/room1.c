// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short", "��ħ�ű����");
        set ("long","��ò����׿��Զ������������ܵ�״���ˡ��������ܣ��㷢�ֵ���������ǿ��
��ɱ��,�ղŲҿ��ս��ʹ��������¡�����ʱ����������ħ�ļ�Ц�������Ǽ�
���������ͷҲ�������ˣ������ȵ���������������......��\n
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ /* sizeof() == 3 */
            "east"  : __DIR__"room2",
            "west"  : __DIR__"room12",
            
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/mob1" : 6,
      ]));

        setup();
}
