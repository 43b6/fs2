// ����ɽկ
inherit NPC;
void create()
{
       set_name("С����",({"soldier"}));
set("long","
����ɽկ��ͷ��С���������ͷĿ������������鿴��û�п��ɵ����û�¾�ϲ
����ѹ�������ϰ��գ���������������Ҳ����ô�����������ӾͿ��԰����ɵ��˰ɡ�
\n");
        set("gender","����");
        set("combat_exp",250000);
        set("attitude","peaceful");
        set("age",22);
        set("class","soldier");
        set("max_force", 700);
        set("force", 700);
        set("max_kee", 700);
        set("kee", 700);
        set_skill("unarmed",85);
        set_skill("dodge",65);
        set_skill("parry",45);
        set_skill("six-fingers",75);
        set_skill("linpo-steps",55);
        map_skill("unarmed","six-fingers");
        map_skill("parry","six-fingers");
        map_skill("dodge","linpo-steps");
        set("chat_chance",10);
        set("chat_msg",({
         (: this_object(),"random_move" :),
        }));
        setup();
        add_money("silver",5);
}

