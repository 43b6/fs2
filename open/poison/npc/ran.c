inherit NPC;
void create()
{
        set_name("����Ȼ",({"chi-yen ran ","ran",}));
        set("gender","Ů��");
        set("age",25);
        set("str",25);
        set("bellicosity", 100);
        set("title","ʯ��Ů");
        set("long","һ�������֮ɫ�ľ�����Ů ,���������������ֺ��������㷢 ,
���� ,�ɱ��������Խ�� ,������һ����һ�����Ľ���� !\n");
        set("combat_exp",400000);
        set("max_kee",1200);
        set("kee",1200);
        set("max_force",1300);
        set("force",1300);
        set_skill("sword",90);
        set_skill("parry",40);
        set_skill("dodge",100);
        set_skill("force",60);
/*	û��� skill ��!?	arthur
        set_skill("wusword",80);
*/
        set_skill("paull-steps",120);
        set_skill("dreamforce",80);
        map_skill("sword","wusword");
        map_skill("parry","wusword");
        map_skill("dodge","paull-steps");
        map_skill("force","dreamforce");
        
        set("chat_chance",10);
        set("chat_msg",({
                "����Ȼ���� : ����Ȩ���ľ��Ը��� ...\n",
                "����Ȼ˵ : ���Ǻþ��� .\n",
                }));
        setup();
}

