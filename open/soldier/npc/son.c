#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("�ΰ���",({"son ba","son","ba"}));
set("long","
    ��������С�鳤��������,�Ǹɲ�����С��
���Ǳ�С����,���ܵ�ѵ���Ǻ��ϸ�ġ�
    ");
set("gender","����");
set("attitude","heroism");
set("age",25);
set("max_kee",700);
set("kee",700);
set("int",20);
set("per",20);
set("str", 20);
set("con", 20);
set("force",800);
set("max_force",800);
set("combat_exp", 100000);
set_skill("force",40);
set_skill("dodge",40);
set_skill("parry",40);
set_skill("lance",40);
set_skill("power-lance",30);
set_skill("eagle-steps",30);
map_skill("dodge","eagle-steps");
map_skill("lance","power-lance");
set("apply/armor",40);
setup();
carry_object("/open/soldier/obj/beast")->wield ();
add_money("gold",1);
}

int accept_kill(object who)
{
   say(HIY"������!��\n"NOR);
   setup();
   return 1;
}
