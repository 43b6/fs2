inherit ROOM;
void create()
{
        set("short", "ҩ��");
        set("long", @LONG

    �������ӵ�С·��������������������ҩ��
    �������Ĳ���һ����̧ͷ���˿��������ϵ�ָ��
    ������д��:

          һ��������: ����ҩ������ʵ�������
                                                          
LONG
        );
        set("can_search",1);
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r5.c",
  "south" : __DIR__"r3.c",
  "north" : __DIR__"r1.c",
]));
        set("no_clean_up", 0);

        setup();
        }


