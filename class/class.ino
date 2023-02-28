class object{
  public:
    void object(char img, bool spawn){
      char _img = img;
      bool _spawn = spawn;
    }

    int8_t x;
    bool y;
    void movement(int prd){
      while(true){
        if(_spawn == 1){
          if (millis() - timing > prd){
            x += 1;
          }
        
        }
        else{
          if (millis() - timing > prd){
            x -= 1;
          }
        }
      
      }

    }
    void draw(lcd, char img = _img){
      lcd.setCursor(x, y);
      lcd.print(img);
    }

  private:
    int prd;
    unsigned long timing;

}
