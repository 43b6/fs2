#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("ְҵӶ��",({"mercenary"}));
set("long","
    ���Ƿ��Ҿ���רְ��ʿ��,���ǽ��ܹ��ϸ�ѵ���ġ�
    ");
set("gender","����");
set("attitude","heroism");
set("age",25);
set("max_kee",300);
set("kee",300);
set("int",20);
set("per",20);
set("str", 20);
set("con", 20);
set("force",200);
set("max_force",200);
set("combat_exp", 20000);
set_skill("force",20);
set_skill("dodge",20);
set_skill("parry",20);
set_skill("unarmed",30);
set("apply/armor",10);
setup();
}
