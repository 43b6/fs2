// wade 2002-10-23 加入 quit 可以储存装备
// autoload.c

string *autoload;

void clean_up_autoload() { autoload = 0; }

void save_autoload()
{
  object *inv;
  int i, j;
  mixed param;

  inv = all_inventory();
  autoload = allocate(sizeof(inv));
  for(i=0, j=0; i<sizeof(inv); i++) {
    if( !(param = inv[i]->query_autoload()) ) continue;
    autoload[j] = base_name(inv[i]);
    if( stringp(param) ) autoload[j] += ":" + param;
    j++;
  }
  autoload = autoload[0..j-1];
}

void restore_autoload()
{
  int i;
  object ob;
  string file, *autodir, param, err;

  if( !pointerp(autoload) ) return;

  for(i=0; i<sizeof(autoload); i++) {
    printf ("autoload %d = %s\n", i+1, autoload[i]);
    if( sscanf(autoload[i], "%s:%s", file, param)!=2 ) {
      file = autoload[i];
      param = 0;
    }
    autodir = explode (file, "/");
#ifndef SAVEEQ
    if (autodir[0] != "obj" &&
        (autodir[0] != "data" || autodir[1] != "autoload")) {
      write ("你有一个自动载入的物件没放在该放的地方："+file+"\n");
      continue;
    }
#endif
    err = catch(ob = new(file));
    if( err || !ob ) {
      write("你觉得似乎失落了什么重要的东西，最好通知一下巫师。\n");
      log_file("AUTOLOAD", sprintf("Fail to autoload %s of %s, error %s\n",
        file, this_object()->query("name"), err));
      continue;
    }
    export_uid(ob);
    ob->move(this_object());
    ob->autoload(param);
  }
  clean_up_autoload();    // To save memory.
}
