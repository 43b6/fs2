// nini.c

#include "/open/open.h"

inherit NPC;

void create()
{
  set_name("СŮ��", ({ "Nini", "nini" }));
  set("race", "����");
  set("gender", "Ů��");
  set("age", 10);
  set("long","��СŮ�������ſ���, Ӧ���Ǹ����˼ҵĺ���, ��֪��ô�����������ط�... СŮ���޺�����, ��ͷɢ��, ȴ����ǿ�ĵ�����.\n");
  set("attitude", "peaceful");
  set("cor", 18);
  set("combat_exp",180);
  set("chat_chance", 4);

  set("chat_msg",({
    (: this_object() :),
    (: this_object() :),

    "СŮ���޺޵�˵�� : �㲻Ҫ��Ϊ�Һ��۸� !\n",
    "СŮ��ҧ���гݵ�˵�� : ��Ҫ�Ǹ��۸���, �Ұְֻ��������ʵ� !\n",
    }));

  set_temp("apply/attack", 15);
  set_temp("apply/damage", 5);
  set_temp("apply/armor", 5);
  setup();
}
