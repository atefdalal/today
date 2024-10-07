object IHM: TIHM
  Left = 0
  Top = 0
  Caption = 'IHM'
  ClientHeight = 429
  ClientWidth = 622
  Color = clScrollBar
  TransparentColorValue = clGainsboro
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object SpeedButton1: TSpeedButton
    Left = 248
    Top = 173
    Width = 97
    Height = 76
    Cursor = crHandPoint
    Caption = 'Command'
    StyleName = 'Windows'
    OnClick = SpeedButton1Click
  end
  object SpeedButton3: TSpeedButton
    Left = 68
    Top = 197
    Width = 93
    Height = 36
    Cursor = crHandPoint
    Caption = 'Gauche'
    StyleName = 'Windows'
    OnClick = SpeedButton3Click
  end
  object SpeedButton2: TSpeedButton
    Left = 248
    Top = 288
    Width = 121
    Height = 49
    Cursor = crHandPoint
    Caption = 'Monter'
    Flat = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    OnClick = SpeedButton2Click
  end
  object TrackBar1: TTrackBar
    Left = 392
    Top = 32
    Width = 25
    Height = 137
    Cursor = crSizeNS
    Hint = 'de 0 '#224' 100 cm'
    Ctl3D = True
    DoubleBuffered = False
    Orientation = trVertical
    ParentCtl3D = False
    ParentDoubleBuffered = False
    ParentShowHint = False
    PositionToolTip = ptLeft
    ShowHint = True
    TabOrder = 0
  end
end
