inherit ROOM;

void create ()
{
  set ("short", "[1;35m��ȥʱ��[0m ˮ�̸�ǰ");
  set ("long", @LONG
    ������ˮ�̸���������򵥵ĳ�����͸��һ����󲻷������ɣ�һ
����ڵ�̫ʦ�ζ����ڴ������룬����ͬʱҲ�ǡ����ߡ������µ�����
��ÿ�������ʮ�߶�Ҫ��ˮ�̸���ġ���̨����ѡ����������Ȼ������
����е�λ��䡣

LONG);

  set("outdoors", "cele");
  set("valid_startroom", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south": "/d/cele/enter",
]));

        set("objects", ([
                "/d/cele/npc/champion":1,
                "/d/cele/npc/master":1
        ]) );


  setup();
}
