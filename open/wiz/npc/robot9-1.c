
inherit NPC;
						
void create()
{
	set_name("����һ�Ż�����", ({ "robot 9-1","robot","9-1" }) );
	set("race", "����");
	set("age", 30000);
	set("gender", "����");
	
	set("chat_chance",5);
	
	set("chat_msg",({
	"Voice from Robot9-1:Everything is under control..\n",
	}));
		
	
	set("long",@TEXT
	  ����һ̨�ܰ�æ�춨������ֵ(value)�Ļ�����
	  �������ܵĻ��ڼ�Fuzzy���ƣ��ﵽÿ��
	  ת65535Ȧ�ķ���¼��
TEXT);	  
										
	set("attitude", "friendly");

	setup();
}
								
void init()
{ 	::init();
    	add_action("do_value","value");
}

//���ǳ� chun �� hockshop.:P							
int do_value(string arg)
{
   object ob;
   int weight,damage,i,value,t1,t2,x,y,z;
   string material;
 //  float i,value,t1,t2,x,y,z;				   
   													
   if( !arg )
   return 0;
   
   else
   {
   	if(!(ob = present(arg,this_player())) )
   	return notify_fail("��Ҫ����ô������һ�Ź���?\n");
   	
   	if( ob->query("money_id") )
   	return notify_fail("R u out of ur mind?\n");
   	
   	if( ob->query("weapon_prop") == 0 )
   	return notify_fail("��϶��ⶫ���ܴ���?\n");
   	
	
     	damage = ob->query("weapon_prop/damage");
   	weight = ob->query_weight();
   	material = ob->query("material");
   	t1=(weight/7);
   	t2=damage/0.25;
	x=(t1)*(t2)*0.0032;
	i=(t1)*(t2)*0.004;
        y=(t1)*(t2)*0.012;
        z=(t1)*(t2)*0.02;	
		   
	command("say"+ sprintf(" %s �� %d �������� %s ������ָ�� %d ��\n"
	        ,ob->short(),weight,material,damage));
																					
	switch(material)
	{
	 case "iron" : value = x;
	 	       break;
	 case "steel" : value = i;
	 		break;
	 case "ironsteel" : value = y; 
	 		    break;
   	 case "crimsonsteel" : value = z;
   	 		    break;
        }
						
	command("say ������Ǯ��...");
        command("say"+ sprintf(" %d \n",value));
        return 1;
								
	
//	if( material == "iron" )
//	value = (int)(i*0.8);
//	sprintf("����һ�� > �����⹫��value %d �Ӽ�30%���ɽ��� \n",value);
//	return 1;

//	if( material == "steel" )
//	value = i; 
//        sprintf("����һ�� > �����⹫��value %d �Ӽ�30%���ɽ��� \n",value);
//        return 1;
												                        
//	if( material == "ironsteel" )
//	value = i*3;
//	sprintf("����һ�� > �����⹫��value %d �Ӽ�30%���ɽ��� \n",value);
//	return 1;
	        
//	if( material == "crimsonsteel" )
//	value = i*5;
//	sprintf("����һ�� > �����⹫��value %d �Ӽ�30%���ɽ��� \n",value);
//	return 1;
  }        
}