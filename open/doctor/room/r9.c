inherit ROOM;

void create()
{
        set("short", "ҩ��");
        set("long", @LONG
����������ȥ��̧̧ͷ�ٿ����أ�������һƬˮ�ݵأ�����ҩ�ĵ���Ӱ
��û�У������š��������ֶ����𣿣�

LONG
        );
        set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r10",
  "north" : __DIR__"r8",
]));
        set("can_search",1);
        set("no_clean_up", 0);
        set("outdoors", 1);

        setup();
        }


