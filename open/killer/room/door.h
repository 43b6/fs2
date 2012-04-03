
#define DOOR_LOCK       2
#define DOOR_CLOSE      1
#define DOOR_OPEN       0
#define NOKEY           0

int look_door(string dir,string str)
{
  object room;
  int status;
  string door;
  room = this_object();
  if (str == "door")
  {
    status = (int)room->query("door/"+dir+"/status");
    if (status == DOOR_LOCK ) 
    {
      if (!(room->query("door/"+dir+"/lock"))) door="��"+(string)room->query("door/"+dir+"/name")+"�����ţ�\n";
      else door=(string)room->query("door/"+dir+"/lock");
    }
    if (status == DOOR_CLOSE) 
    {
      if (!(room->query("door/"+dir+"/lock"))) door="��"+(string)room->query("door/"+dir+"/name")+"�ǹ��ŵġ�\n";
      else door=(string)room->query("door/"+dir+"/close");
    }
    if (status == DOOR_OPEN ) 
    {
      if (!(room->query("door/"+dir+"/lock"))) door="��"+(string)room->query("door/"+dir+"/name")+"�ǿ��ŵġ�\n";
      else door=(string)room->query("door/"+dir+"/open");
    }  
    write (door);
    return 1;
  }
  else return 0; 
}


int open_door(string dir,string str)
{
  object room;
  int status;
  string relation,connect;
  room = this_object();
  connect  = (string)room->query("door/"+dir+"/connect");
  if ( str == "door" )
  {
    status = (int)room->query("door/"+dir+"/status");
    if (status == DOOR_LOCK ) write((string)room->query("door/"+dir+"/name")+"�����ĺܽ������޷�������\n");
    if (status == DOOR_OPEN ) write((string)room->query("door/"+dir+"/name")+"�����ǿ��ŵ��ˡ�\n");
    if (status == DOOR_CLOSE) 
    {
      write("���"+(string)room->query("door/"+dir+"/name")+"�򿪣�\n");
      say (this_player()->query("name")+"��"+(string)room->query("door/"+dir+"/name")+"�򿪣�\n");
      room->set("exits/"+dir , (string)room->query("door/"+dir+"/connect"));
      room->set("door/"+dir+"/status" , DOOR_OPEN);
      if ((room->query("door/"+dir+"/relation")))
      {
        relation = (string)room->query("door/"+dir+"/relation");
        connect->set("door/"+relation+"/status" , DOOR_OPEN);
        connect->set("exits/"+relation , (string)connect->query("door/"+relation+"/connect"));
      }
    }
    return 1;
  }
  return 0;
}

int close_door(string dir,string str)
{
  object room;
  int status;
  string relation , connect;
  room = this_object();
  relation = (string)room->query("door/"+dir+"/relation");
  connect  = (string)room->query("door/"+dir+"/connect");
  if ( str == "door" )
  {
    status = (int)room->query("door/"+dir+"/status");
    if (status == DOOR_LOCK || status == DOOR_CLOSE) 
      write((string)room->query("door/"+dir+"/name")+"�缺�����ˡ�\n");
    if (status == DOOR_OPEN ) 
    {
      write("���"+(string)room->query("door/"+dir+"/name")+"���ϡ�\n");
      say (this_player()->query("name")+"��"+(string)room->query("door/"+dir+"/name")+"���ϡ�\n");
      room->delete("exits/"+dir );
      room->set("door/"+dir+"/status" , DOOR_CLOSE);
      if ((room->query("door/"+dir+"/relation")))
      {
        relation = (string)room->query("door/"+dir+"/relation");
        connect->set("door/"+relation+"/status" , DOOR_CLOSE);
        connect->delete("exits/"+relation );
      }
    }
    return 1;
  }
  return 0;
}

int lock_door(string dir,string str)
{
  object room,me,key;
  int status;
  string connect,relation;
  if (str != "door") return notify_fail("��Ҫ��ʲô��\n");
  key = this_object();
  me = this_player();
  room = environment(me);
  if (!room->query("door/"+dir)) return 0;
  connect =  (string)room->query("door/"+dir+"/connect");
  status = (int)room->query("door/"+dir+"/status");
  if (status == DOOR_OPEN ) write("���ȹ���\n");
  if (status == DOOR_LOCK ) write("�����������ˣ�û��Ҫ������ɡ���\n");
  if (status == DOOR_CLOSE)
  {
    if( (string)key->query("keyflag") == (string)room->query("door/"+dir+"/key") )
    {
      write((string)key->query("lock"));
      room->set("door/"+dir+"/status",DOOR_LOCK);
      if ((room->query("door/"+dir+"/relation")))
      {
        relation = (string)room->query("door/"+dir+"/relation");
        connect->set("door/"+relation+"/status" , DOOR_LOCK);
      }
      return 1;  
    }
    else
    {
      write("���"+(string)key->query("name")+"���ܰ����������\n");
      return 0;
    }
  }  
}

int unlock_door (string dir,string str)
{
  object room,me,key;
  int status;
  string connect,relation;
  if (str != "door") return notify_fail("��Ҫ��ʲô��\n");
  key = this_object();
  me = this_player();
  room = environment(me);
  if (!room->query("door/"+dir)) return 0;
  connect =  (string)room->query("door/"+dir+"/connect");
  status = (int)room->query("door/"+dir+"/status");
  if (status == DOOR_OPEN ) write ("�������򿪆���\n");
  if (status == DOOR_CLOSE) write ("��û��������\n");
  if (status == DOOR_LOCK )
  {
    if( (string)key->query("keyflag") == (string)room->query("door/"+dir+"/key") )
    {
      write((string)key->query("unlock"));
      room->set("door/"+dir+"/status",DOOR_CLOSE);
      if ((room->query("door/"+dir+"/relation")))
      {
        relation = (string)room->query("door/"+dir+"/relation");
        connect->set("door/"+relation+"/status" , DOOR_CLOSE);
      }
      return 1;  
    }
    else
    {
      write("���"+(string)key->query("name")+"�޷��������\n");
      return 0;
    }
  }  
}

