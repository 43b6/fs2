//written by acelan...../u/a/acelan/room/wood23.c

inherit ROOM;

void create()
{
        set("short", "���صĵص�");
        set("long", @LONG
���ڻ谵�ĵص�֮��, ʹ�㲻ʱ����Ҫ��ͷ�鿴�Ƿ�����ֵ�Ӱ
��, һ��Ī����Σ������������˾�����, ����ϸ�ļ�����Ե�ǽ��
������û���κεķ��֡�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : "/open/killer/mon/room/wood24.c",
       "south" : "/open/killer/mon/room/wood16.c",
   ]));
        set("no_clean_up", 0);

        setup();
        }
