#define C_OBJ "/open/wind-rain/obj"
#define C_NPC "/open/wind-rain/npc"
#define C_ROOM "/open/wind-rain"


void greeting(object who)
{
  object me=this_object();

    if(me->query("id")=="liu-un"){    
  if((who->query("family/family_name") == "ħ����") )
    {
       
       command("say "+who->query("name")+"����ħ���ŵ���!!����֮�𲻹�����,������!!");
       me->kill_ob(who);
    }
                                 }
                                 
    if( (who->query("id") == "taifar") )
    {
       command("say ��ӭ��¥��!");
       command("bow "+who->query("name"));
    }
    else if( (who->query("id") == "roger") )
    {
       command("say ��ӭ��¥��!");
       command("bow "+who->query("name"));
    }
//xxxx==δ���������������id
     else if( (who->query("id") == "juliet") )
    {
       command("say ���������ݵ�!");
       command("bow "+who->query("name"));
    }
    else
    {
     command("say �������꣬�������� ;������һ����ʲô��");
    }
//xxx==δ����ĳ�ɵĸ�ɱ��
     if( (who->query("family/family_name") == "xxxx"))
    {
       
     command("say ¥�������"+who->query("family/family_name")+"���˸�ɱ���ۣ� ");
     me->kill_ob(who);
    }
return;
}
