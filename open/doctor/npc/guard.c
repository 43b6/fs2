#include <ansi.h>
inherit NPC;
void create()
{
        set_name("����������",({"guard"}));
        set("long","
�������Ƶ�Ц����������һ�ɲ����ַ������ϣ���������ŭ����������
ʹ�������ĵ�������ͷ��һɨ���ա�
");
        set("gender","����");
        set("combat_exp",60000);
        set("attitude","heroism");
        set("age",30);
        set_skill("unarmed",20);
        set_skill("dodge", 30);
        set_skill("parry", 40);
        set_skill("force", 30);
        set_skill("move",40);
        set_skill("cure",30);
        set_skill("shinnoforce",30);
        set_skill("yu-needle",50);
        set("force",300);
        set("max_force",300);
        set("force_factor",5);
set_skill("seven-steps",30);
        map_skill("force","shinnoforce");
        map_skill("unarmed","yu-needle");
map_skill("dodge","seven-steps");
map_skill("move","seven-steps");
        set("race","����");
        setup();
        add_money("silver",70);
        carry_object("/open/doctor/obj/needle3.c")->wield();

}
void greeting(object who)
{
    if( (who->query("id") == "cccc") )
    {
       command("say ��ӭ�����ŵĴ��̴���!!");
       command("bow "+who->query("name"));
    }
    else
    {
     command("say ��ӭ����������!!����Ȥ������������??");
    }
return;
}



