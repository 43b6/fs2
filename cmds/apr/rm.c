inherit F_CLEAN_UP; 
int main(object me, string arg)
{
  string        src, dst, dest, *dirs;
  mixed         *file;
  string        dir, srcdir;
  int           i, j; 
  seteuid(geteuid(me));
  // ��������
  if (!arg || sscanf(arg, "%s", src)!=1 )
  return notify_fail("ָ���ʽ: rm <ԭ����> \n");
  // ȡ�� source ����
  dir = resolve_path(me->query("cwd"), src);
  dirs = explode(dir, "/");
  srcdir = dir;
  i = sizeof(dir) - sizeof(dirs[<1]);
  srcdir = dir[0..i-1];
  if( file_size(dir)==-2 && dir[<1] != '/' ) dir += "/";
  file = get_dir(dir, -1);
  if( !sizeof(file) ) {
    if (file_size(dir) == -2)
      return notify_fail("Ŀ¼�ǿյġ�\n");
    else
      return notify_fail("û���������: "+src+"��\n");
  }
  i = sizeof(file);
    while(i--) {
      if (file[i][1]!=-2) {
        src = srcdir+file[i][0];
        if(rm(src)){
          write("rm "+src+" OK!!!\n");
          log_file("wiz/RM",sprintf("%s rm %s at %s\n",me->query("id"),src,ctime(time())));
        }
        else{
              return notify_fail("��û��ɾ��"+src+"��Ȩ��\n");
        }
      }
    }

  return 1;
}
 
int help(object me)
{
  write(@HELP
ָ���ʽ :  rm <����>
               <������Ϊ * ��һ�� rm �� so С��ʹ��>
��ָ�������(��)ɾ��������
HELP
    );
    return 1;
}
 
