// Room: /u/o/onion/room/cookroom.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���ﵽ��������ശ��,����ڻ�¯����ȼȼ�ķ������ȵĻ��,ʹ�Ŀ������Ȳ���.
����æµ��������ȥ,æ����ͷ��.���������������һ������(table),�����������
�ڵĲ�,�ƺ����Ѿ����õ�,��ζ���Ǵ����������.
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
         "west" : __DIR__"room4",
	]));
        set("item_desc", ([ /* sizeof() == 1 */
       "table" : "һ�ż�Ӳ��ľ��,��ͷ�����˸�ʽ�����Ĳ�,����͵��һ��...:P\n"
        ]));
                            	
        
	setup();
	
}
