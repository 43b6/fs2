#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("��˱�",({"ma ken","ma","ken"}));
set("long","
    ����ר��Ѳ�ߵ�,������û����Ǳ����֯,
���Ľ׼�����С�ӳ�,��ñ�������
    ");
set("gender","����");
set("attitude","heroism");
set("age",25);
set("max_kee",600);
set("kee",600);
set("int",20);
set("per",20);
set("str", 20);
set("con", 20);
set("force",500);
set("max_force",500);
set("combat_exp", 50000);
set_skill("force",30);
set_skill("dodge",30);
set_skill("parry",30);
set_skill("lance",40);
set_skill("eagle-steps",30);
map_skill("dodge","eagle-steps");
set("apply/armor",20);
setup();
carry_object("/open/soldier/obj/snake")->wield ();
add_money("gold",1);
}

int accept_kill(object who)
{
   say(HIY"������!��\n"NOR);
   setup();
   return 1;
}
