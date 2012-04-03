// Room: /open/badman/room/e1.c

inherit ROOM;

void create ()
{
  set ("short", "���˹����");
  set ("long", @LONG
������Ǵ�˵�ж��˹ȵ���ڣ���˵�ڹ���֮��û��һ������
ʮ���⣬����Ѫ�ȣ�û��һ�������������˺�֮��ǡ���Ҳ����
Ϊ�ۼ��ڴ˵Ķ��ǽ����еļ���֮ͽ��������Ȼ�޲��ó����ǵ���
��ȴҲû���˸��߽����˹�һ����
    �����Ե������У�һյ����ƳɵĿ������������Ƕ��ɽʯ��
�ıܷ紦������������һ�㡣�ڵƻ����ҫ�£�ɽʯ���ƺ�����
������(words)��

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "words" : "
	�������죬
	��������ߡ�
",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/npc/yen" : 1,
]));
  set("outdoors", "/open/badman");
  set("exits", ([ /* sizeof() == 2 */
  "leave" : "/open/badman/room/t6",
  "west" : "/open/badman/room/b1",
]));

  setup();
}

int valid_leave(object who, string dir)
{
  if( present("sma yen", this_object()) ) {
  if( dir=="west" && !present("badman license", who) ) {
    switch(random(4)) {
      case 0:
        return notify_fail("˾��������Ķ���Ц��: ���ѣ����˹Ȳ��������������ĵط�����������\n");
        break;
      case 1:
        return notify_fail("˾�����������еĽ���������ǰ˵��: ����ȣ������ʿ������еĴ������𲻴�Ӧ��\n");
        break;
      default:
        return notify_fail("˾���̶���ҡ��ҡͷ��: ��������޶���֤�߲���������˹ȣ�Υ�߸�ɱ���ۣ�\n");
    }
  }

  if( dir=="west" && present("badman license", who) )
    message_vision("˾���̿��˿�$N�Ķ���֤˵��: "+who->query("name")+"������Թ�ȥ�ˡ�\n\n", who);
  }

  return ::valid_leave(who, dir);
}
