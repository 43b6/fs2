inherit NPC;
void create()
{
        set_name("˾ͽǧ��",({"si-tu wine","si-tu","wine"}));
        set("gender","����");
        set("age",50);
        set("str",35);
        set("title","ǧ������");
        set("long","һ���ƹ� ,��ǧ������Ĺ��� .\n");
        set("combat_exp",100000);
        set("max_kee",1500);
        set("kee",1500);
        set_skill("parry",60);
        set_skill("dodge",80);
        set("chat_chance",10);
        set("chat_msg",({
                "˾ͽǧ��˵�� : ����..˭�ܸ��Ҿ� ?\n",
                "˾ͽǧ��˵�� : ��Ը�⽫���Ķ������� .\n"
                }));
        setup();
}


int accept_object(object me,object ob)
{
      if(ob->query("id")=="wineskin")
     new("/open/poison/obj/playboy.c")->move(me);
      message_vision("˾ͽǧ��ȡ��һ������ͼ ,����$N !\n",me);
      command("say �ٺ� ,�ܺÿ�� :P~~~~");
}
