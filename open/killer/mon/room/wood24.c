//written by acelan...../u/a/acelan/room/wood24.c

inherit ROOM;

void create()
{
        set("short", "���صĵص�");
        set("long", @LONG
�ص�������ǰ��, ǰ��ż�����µ�������ס���ȥ·, �����谭
���������, �Ϸ���ʱ����¼���ˮ��, ʹ�����ص��δ�δ������
, һ����ͻȻ����ı������ϴ���......
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : "/open/killer/mon/room/wood25.c",
       "west" : "/open/killer/mon/room/wood23.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
