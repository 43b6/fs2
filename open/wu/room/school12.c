// Room: /u/d/devils/school12.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���߽�һ��������ʪ��С���䣬�ս�����ʱ�����һƬ��ڣ�����
�۾�����ϰ�ߺڰ������Ȼ�����и��˱������������֫��������
ס�����ù�Ҳ�������ᴩ��������ͷ��Ҳ���������㲻֪�������ǻ�..
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"school11",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/jen2" : 1,
]));
        setup();
}
