inherit ROOM;
void create()
{
	set("short", "�ּ�С·");
	set("long", @LONG
������������һ���ּ��С·�ϣ�С·��ǰ�ƺ�ͨ��һ��é®����
�ӵ��������þ����ĵģ�С·���Ե�����Ҳ�����ߵİ�С����������
��Ӫ�����������ӡ�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : "/open/tendo/room/tower/make3",
  "west" : "/open/tendo/room/tower/make5",
]));
     set("outdoors",1);
	setup();
}


