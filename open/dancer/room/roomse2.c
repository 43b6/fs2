// Room: /open/dancer/room/roomse2.c :cgy
#include <room.h>
#include <ansi.h>
inherit ROOM;

void create()
{
        set("short",HIC"��ˮ��"NOR);
        set("long", @LONG
һ���������ŵ���ˮ�أ����ˮ�ص�ˮԴ�����ھ��µ�����
����ӿȪ��������Ȫˮ��Ӧ��������ڴ�װˮ(fill)�������ڴ�
��ˮ����������羰���ŵĵط���ϢҲ��һ��������¡�
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"roomse3.c",
  "west" : __DIR__"roomse1.c",
  "north" : __DIR__"roomes2.c",
]));

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

        set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/obj/pool" : 1,
]));
        setup();
}
