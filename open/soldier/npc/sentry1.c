#include "/open/open.h"
inherit NPC;
void create()
{
    set_name("һ���ڱ�", ({ "sentry" }) );
    set("title", "���Ҿ�");
	set("gender", "����");
    set("long", "����վ������ר�ſ�����˶�̬��ʿ����\n");
  set("age",22);
	set("attitude", "heroism");
	set("kee",450);
	set("max_kee",450);
    set("combat_exp",7000);
    set_skill("dodge",15);
	setup();
}
