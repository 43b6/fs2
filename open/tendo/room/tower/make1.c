inherit ROOM;
void create()
{
	set("short", "������");
	set("long", @LONG
���������ʸ���һ��������������ϣ�����������Ѿ����ߡ�����
�ߣ������С�ĵ�����ȥ����������Ҳ��ȥ�������������Ͻ��������
���������󲿷ֶ������ɺ�Զ����k������
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "up" : "/open/tendo/room/tower/make2",
  "down" : "/open/tendo/room/tower/tomb",
]));
       set("outdoors",1);
	setup();

}


