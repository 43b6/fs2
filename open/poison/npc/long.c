inherit NPC;
void create()
{
        set_name("������",({"shun-shou long","long",}));
        set("gender","����");
        set("age",30);
        set("str",45);
        set("bellicosity", 1000);
        set("title","����");
        set("long","һλӢ�����˵�׳�� ,���ñ��� ,һ����֪�� ,��һ���������ǵ��� !\n");
        set("combat_exp",600000);
        set("max_kee",2500);
        set("kee",2500);
        set("max_force",2000);
        set("force",2000);
        set_skill("blade",90);
        set_skill("parry",80);
        set_skill("dodge",40);
        set_skill("force",70);
        set_skill("dragon-blade",90);
        set_skill("fly-steps",60);
        set_skill("powerforce",80);
        map_skill("blade","dragon-blade");
        map_skill("parry","dragon-blade");
        map_skill("dodge","fly-steps");
        map_skill("force","powerforce");
        
        set("chat_chance",10);
        set("chat_msg",({
                "������˵�� : ���� ,˭��Ů�˱��Ҷ� ?\n",
                "�������ѹ���˵ : ��������ֻʣһ���� :~~~\n"
                }));
        setup();
}

