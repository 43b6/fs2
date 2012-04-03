// Room: /open/badman/room/r13

#include </open/open.h>

inherit ROOM;

void create ()
{
  set ("short", "����");
  set ("long", @LONG
��˳����ζ����Դ���˽�����ԭ�����������ҷ��ݵĳ�����
���˾��ȵ��ǣ�������Ƴ���Ȼ�ǰ����������������죬���㲻
��Ҫ��������������ʲô���ˡ��뵽���ԭ��¯�������˴�����
�ߵ���ζҲ��ʼ��������������Ȼ��������������ſ�ˮ����
���Ϳ��أ�ʶ��Ļ��ǿ���ɡ�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r1",
]));
  set("objects", ([ /* sizeof() == 1 */
  BAD_NPC"lee" : 1,
]));
  set("light_up", 1);

  setup();
}

int valid_leave(object who, string dir)
{
  if( present("lee da tswei", this_object()) ) {
  if( dir=="south" && who->query_skill("badforce",1)>30 && who->query("bellicosity")>200 && who->query("quests/evilup")!=1 && who->query_temp("evilup")!=1) {
  switch(random(3)) {
  case 0:
    who->set_temp("evilup",1);
   who->set_temp("yang",1);
   tell_object(who,"[1;33m���������˵�� :���� ,���� ?��ü������ ,ɶ ?��֪����ô����\n�����ö�ħ�� ?�� ,�����....�����㵹Ҫ���������� ,ֻҪ\n�����������С�����������҇��� ,��׼�̵����Ϊֹ !....�ǵ�\n ,Ҫ���ʵ�ม�[0m\n");
    break;
  case 1:
    who->set_temp("evilup",1);
   who->set_temp("kou",1);
   tell_object(who,"[1;33m���������˵�� :���� ,���� ?��ü������ ,ɶ ?��֪����ô����\n�����ö�ħ�� ?�� ,�����....�����㵹Ҫ���������� ,ֻҪ\n��ѹ�Х�����������������҇��� ,��׼�̵����Ϊֹ !....�ǵ�\n ,Ҫ���ʵ�ม�[0m\n");
    break;
  case 2:
    who->set_temp("evilup",1);
   who->set_temp("chen",1);
   tell_object(who,"[1;33m���������˵�� :���� ,���� ?��ü������ ,ɶ ?��֪����ô����\n�����ö�ħ�� ?�� ,�����....�����㵹Ҫ���������� ,ֻҪ\n��ѳ������ǽ�ʵ��������������ƷζƷζ ,��׼�̵����Ϊֹ !\n....�ǵ� ,Ҫ���ʵ�ม�[0m\n");
    break;
    default:
    return notify_fail("�� ,���Ͱ� !\n");
   }
  }
}
    return ::valid_leave(who, dir);
}
